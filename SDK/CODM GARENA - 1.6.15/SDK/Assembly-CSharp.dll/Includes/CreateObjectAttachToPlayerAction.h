#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateObjectAttachToPlayerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateObjectAttachToPlayerAction"));
	}

	template <typename T = uintptr_t> T& prefabObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& socketName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& localRotation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(CreateObjectAttachToPlayerAction*))(Il2CppBase() + 0x41550CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(CreateObjectAttachToPlayerAction*))(Il2CppBase() + 0x415551C))(this);
	}

};

}
