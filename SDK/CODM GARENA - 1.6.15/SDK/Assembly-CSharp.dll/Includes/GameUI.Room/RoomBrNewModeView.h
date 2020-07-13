#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBrNewModeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBrNewModeView"));
	}

	template <typename T = uintptr_t> T& MemberItemTemplate() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& SpriteMapResource() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& GridRegular() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& GridRebel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& ContainerPP() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BtnTpp() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& ToggleTPP() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& BtnFPP() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& ToggleFPP() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RegularMemberList() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RebelarMemberList() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> static T& NEW_MODE_MAX_PLAYER_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPersonPerspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InitMember() {
		return ((T (*)(RoomBrNewModeView*))(Il2CppBase() + 0x2CF4BF8))(this);
	}
	template <typename T = void> T RefreshPlayerList(uintptr_t roomDS) {
		return ((T (*)(RoomBrNewModeView*, uintptr_t))(Il2CppBase() + 0x2CF64F0))(this, roomDS);
	}
	template <typename T = void> T SetCurrentPersonPerspective(uintptr_t ppMode) {
		return ((T (*)(RoomBrNewModeView*, uintptr_t))(Il2CppBase() + 0x2CF55FC))(this, ppMode);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshPlayerList(uintptr_t P0) {
		return ((T (*)(RoomBrNewModeView*, uintptr_t))(Il2CppBase() + 0x2CF6A64))(this, P0);
	}

};

}
