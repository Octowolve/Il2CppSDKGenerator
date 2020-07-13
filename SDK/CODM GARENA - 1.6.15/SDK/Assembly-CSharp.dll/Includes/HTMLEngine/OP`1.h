#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class OP1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "OP`1"));
	}

	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _pool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _capacity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _returnHandler() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Acquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AcquireInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x48EB244))(0);
	}
	template <typename T = uintptr_t> static T Acquire() {
		return ((T (*)(void *))(Il2CppBase() + 0x48EB384))(0);
	}
	template <typename T = uintptr_t> T AcquireInternal() {
		return ((T (*)(OP1*))(Il2CppBase() + 0x48EB564))(this);
	}
	template <typename T = void> T ReturnObject(uintptr_t obj) {
		return ((T (*)(OP1*, uintptr_t))(Il2CppBase() + 0x48EB794))(this, obj);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(OP1*))(Il2CppBase() + 0x48EB974))(this);
	}

};

}
