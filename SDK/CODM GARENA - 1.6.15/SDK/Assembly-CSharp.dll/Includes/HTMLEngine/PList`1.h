#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class PList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "PList`1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnumerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B5717C))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B571F8))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B572A4))(this);
	}
	template <typename T = void> T Add(uintptr_t value) {
		return ((T (*)(PList1*, uintptr_t))(Il2CppBase() + 0x4B572DC))(this, value);
	}
	template <typename T = void*> T get_Items() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B573AC))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B573B4))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(PList1*, int32_t))(Il2CppBase() + 0x4B574AC))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(PList1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B574E4))(this, index, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PList1*))(Il2CppBase() + 0x4B5751C))(this);
	}

};

}
