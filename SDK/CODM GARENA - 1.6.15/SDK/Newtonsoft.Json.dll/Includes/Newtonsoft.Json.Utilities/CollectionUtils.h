#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class CollectionUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "CollectionUtils"));
	}


	template <typename T = bool> static T IsNullOrEmpty(void* collection) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1BA49A0))(0, collection);
	}
	template <typename T = void> static T AddRange(void* initial, void* collection) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1E89444))(0, initial, collection);
	}
	template <typename T = void> static T AddRange_1(void* initial, uintptr_t collection) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x1E897E8))(0, initial, collection);
	}
	template <typename T = bool> static T IsDictionaryType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE2FF0))(0, type);
	}
	template <typename T = uintptr_t> static T ResolveEnumerableCollectionConstructor(uintptr_t collectionType, uintptr_t collectionItemType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE3250))(0, collectionType, collectionItemType);
	}
	template <typename T = uintptr_t> static T ResolveEnumerableCollectionConstructor_1(uintptr_t collectionType, uintptr_t collectionItemType, uintptr_t constructorArgumentType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE33CC))(0, collectionType, collectionItemType, constructorArgumentType);
	}
	template <typename T = int32_t> static T IndexOf(void* collection, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x21DF940))(0, collection, predicate);
	}
	template <typename T = bool> static T Contains(Il2CppList<uintptr_t>* list, uintptr_t value, uintptr_t comparer) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BA4828))(0, list, value, comparer);
	}
	template <typename T = int32_t> static T IndexOfReference(Il2CppList<uintptr_t>* list, uintptr_t item) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21DFC74))(0, list, item);
	}
	template <typename T = void*> static T GetDimensions(uintptr_t values, int32_t dimensionsCount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DE373C))(0, values, dimensionsCount);
	}
	template <typename T = void> static T CopyFromJaggedToMultidimensionalArray(uintptr_t values, uintptr_t multidimensionalArray, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DE3AF8))(0, values, multidimensionalArray, indices);
	}
	template <typename T = uintptr_t> static T JaggedArrayGetValue(uintptr_t values, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DE3E00))(0, values, indices);
	}
	template <typename T = uintptr_t> static T ToMultidimensionalArray(uintptr_t values, uintptr_t type, int32_t rank) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DE3F80))(0, values, type, rank);
	}

};

}
