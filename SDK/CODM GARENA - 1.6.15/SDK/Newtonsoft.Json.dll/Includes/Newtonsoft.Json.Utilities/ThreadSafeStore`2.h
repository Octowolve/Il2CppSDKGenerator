#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ThreadSafeStore2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ThreadSafeStore`2"));
	}

	template <typename T = uintptr_t> T& _lock() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _store() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _creator() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T Get(uintptr_t key) {
		return ((T (*)(ThreadSafeStore2*, uintptr_t))(Il2CppBase() + 0x4B68C98))(this, key);
	}
	template <typename T = uintptr_t> T AddValue(uintptr_t key) {
		return ((T (*)(ThreadSafeStore2*, uintptr_t))(Il2CppBase() + 0x4B68D20))(this, key);
	}

};

}
