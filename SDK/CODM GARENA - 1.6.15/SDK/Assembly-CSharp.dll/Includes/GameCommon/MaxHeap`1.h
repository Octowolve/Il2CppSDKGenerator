#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class MaxHeap1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "MaxHeap`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Size() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Insert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShiftDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShiftUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(MaxHeap1*))(Il2CppBase() + 0x48D2A60))(this);
	}
	template <typename T = int32_t> T Size() {
		return ((T (*)(MaxHeap1*))(Il2CppBase() + 0x48D2B10))(this);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(MaxHeap1*))(Il2CppBase() + 0x48D2BFC))(this);
	}
	template <typename T = void> T Insert(uintptr_t item) {
		return ((T (*)(MaxHeap1*, uintptr_t))(Il2CppBase() + 0x48D2CF4))(this, item);
	}
	template <typename T = uintptr_t> T ExtractMax() {
		return ((T (*)(MaxHeap1*))(Il2CppBase() + 0x48D2DF4))(this);
	}
	template <typename T = void> T ShiftDown(int32_t v) {
		return ((T (*)(MaxHeap1*, int32_t))(Il2CppBase() + 0x48D2FF0))(this, v);
	}
	template <typename T = void> T ShiftUp(int32_t k) {
		return ((T (*)(MaxHeap1*, int32_t))(Il2CppBase() + 0x48D33A4))(this, k);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MaxHeap1*))(Il2CppBase() + 0x48D3660))(this);
	}

};

}
