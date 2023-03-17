using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class Store : MonoBehaviour
{
    [SerializeField] private GameObject _restoreButton;

    private void Awake()
    {
        if(Application.platform != RuntimePlatform.IPhonePlayer)
        {
            _restoreButton.SetActive(false);
        }
    }

    public void OnPurchaseComplete(Product product)
    {
        SaveManager.SavePurchase(product);
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason reason)
    {
        Debug.LogWarning($"Failed to purchase product {product.definition.id} because {reason}");
    }
}
