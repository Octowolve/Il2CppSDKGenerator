#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRRoomMembersBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRRoomMembersBaseController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRestrictPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRRoomMembersBaseController*))(Il2CppBase() + 0x1B20850))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRRoomMembersBaseController*))(Il2CppBase() + 0x1B2095C))(this);
	}
	template <typename T = void> T GetRestrictPosition(uintptr_t topLeftVec, uintptr_t topRightVec, uintptr_t bottomLeftVec, uintptr_t bottomRightVec) {
		return ((T (*)(BRRoomMembersBaseController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B209FC))(this, topLeftVec, topRightVec, bottomLeftVec, bottomRightVec);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRRoomMembersBaseController*))(Il2CppBase() + 0x1B20C44))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRRoomMembersBaseController*))(Il2CppBase() + 0x1B20C4C))(this);
	}

};

}
