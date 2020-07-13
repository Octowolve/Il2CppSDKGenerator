#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomMemberEncourageTeamItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomMemberEncourageTeamItem"));
	}

	template <typename T = uintptr_t> T& WidgetRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BtnAdd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LabelNickName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpriteNickNameBG() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_BindTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_SquadTeamCamera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ScreenScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetContent(uintptr_t data) {
		return ((T (*)(RoomMemberEncourageTeamItem*, uintptr_t))(Il2CppBase() + 0x41337AC))(this, data);
	}
	template <typename T = void> T SetBindTransform(uintptr_t bind, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberEncourageTeamItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4133A78))(this, bind, squadTeamCamera);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoomMemberEncourageTeamItem*))(Il2CppBase() + 0x4134024))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RoomMemberEncourageTeamItem*))(Il2CppBase() + 0x4133BDC))(this);
	}
	template <typename T = void> T OnBtnAddClick() {
		return ((T (*)(RoomMemberEncourageTeamItem*))(Il2CppBase() + 0x413436C))(this);
	}

};

}
