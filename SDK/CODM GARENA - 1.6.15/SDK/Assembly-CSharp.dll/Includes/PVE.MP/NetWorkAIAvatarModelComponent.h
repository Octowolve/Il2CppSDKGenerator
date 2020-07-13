#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetWorkAIAvatarModelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetWorkAIAvatarModelComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T LoadAvatarModel() {
		return ((T (*)(NetWorkAIAvatarModelComponent*))(Il2CppBase() + 0x462A704))(this);
	}
	template <typename T = uintptr_t> T SpawnAvatar(int32_t meshID, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent) {
		return ((T (*)(NetWorkAIAvatarModelComponent*, int32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x462A9B0))(this, meshID, pos, rot, parent);
	}
	template <typename T = void> T ChangeAvatarModel(uintptr_t pawn, int32_t modelID) {
		return ((T (*)(NetWorkAIAvatarModelComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x462AB2C))(this, pawn, modelID);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAvatarModel() {
		return ((T (*)(NetWorkAIAvatarModelComponent*))(Il2CppBase() + 0x462AF14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeAvatarModel(uintptr_t P0, int32_t P1) {
		return ((T (*)(NetWorkAIAvatarModelComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x462AF1C))(this, P0, P1);
	}

};

}
