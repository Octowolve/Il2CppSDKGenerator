#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class DelegateBridgeBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "DelegateBridgeBase"));
	}

	template <typename T = uintptr_t> T& firstKey() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& firstValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& bindTo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& errorFuncRef() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T TryGetDelegate(uintptr_t key, uintptr_t* value) {
		return ((T (*)(DelegateBridgeBase*, uintptr_t, uintptr_t*))(Il2CppBase() + 0xF3A544))(this, key, value);
	}
	template <typename T = void> T AddDelegate(uintptr_t key, uintptr_t value) {
		return ((T (*)(DelegateBridgeBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3A608))(this, key, value);
	}
	template <typename T = uintptr_t> T GetDelegateByType(uintptr_t type) {
		return ((T (*)(DelegateBridgeBase*, uintptr_t))(Il2CppBase() + 0xF3A7CC))(this, type);
	}

};

}
