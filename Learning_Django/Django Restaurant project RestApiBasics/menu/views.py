from django.shortcuts import render, HttpResponse
from rest_framework.response import Response
from rest_framework.decorators import api_view
from django.http import JsonResponse
from .serializers import ItemSerializer

from .models import Item
# Create your views here.
"""
def item_list(request):
    # without django rest framework
    items = Item.objects.all()
    # [{}, {}, {}]
    # here we are converting a queryonj into a python list of dictionaries
    item_list = []
    for item in items:
        item_list.append({
            'name': item.name,
            'price': item.price,
            'description': item.description
        })
    # return JsonResponse(items, safe=False)
    return JsonResponse({"menu-items": item_list})
"""

@api_view(['GET'])
def item_list(request):
    items = Item.objects.all()
    serializer = ItemSerializer(items, many=True)
    return Response(serializer.data)

# serialization-> Changing datatypes into other datatypes
def item_list_serialized(request):
    items = Item.objects.all()
    serializer = ItemSerializer(items, many=True)
    return JsonResponse(serializer.data, safe=False)


@api_view(['GET'])
def item_detail(request, pk):
    item = Item.objects.get(id = pk)
    serializer = ItemSerializer(item)
    return Response(serializer.data)
