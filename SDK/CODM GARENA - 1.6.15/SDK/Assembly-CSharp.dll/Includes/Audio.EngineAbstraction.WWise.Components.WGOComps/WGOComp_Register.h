#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components.WGOComps {

class WGOCompRegister
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components.WGOComps", "WGOComp_Register"));
	}

	template <typename T = uint64_t> T& mCurGameObjectID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mInnerGO() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_AkGO() {
		return ((T (*)(WGOCompRegister*))(Il2CppBase() + 0x44F6B20))(this);
	}
	template <typename T = uint64_t> T get_WWiseGameObjectID() {
		return ((T (*)(WGOCompRegister*))(Il2CppBase() + 0x44F6B28))(this);
	}
	template <typename T = void> T DisableEnviromentAware() {
		return ((T (*)(WGOCompRegister*))(Il2CppBase() + 0x44F6B30))(this);
	}
	template <typename T = void> T UnRegisterGameObject(uintptr_t go) {
		return ((T (*)(WGOCompRegister*, uintptr_t))(Il2CppBase() + 0x44F6C08))(this, go);
	}
	template <typename T = void> T RegisterGameObject(uintptr_t go) {
		return ((T (*)(WGOCompRegister*, uintptr_t))(Il2CppBase() + 0x44F6DD8))(this, go);
	}
	template <typename T = bool> T get_Registered() {
		return ((T (*)(WGOCompRegister*))(Il2CppBase() + 0x44F6DC8))(this);
	}

};

}
