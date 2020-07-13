#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMemberInfoSettingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMemberInfoSettingView"));
	}

	template <typename T = uintptr_t> T& colliderMask() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelPlayerName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BtnItems() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(uint64_t playerId, Il2CppString* playerName, bool bIsOwner, uintptr_t callback) {
		return ((T (*)(BRMemberInfoSettingView*, uint64_t, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1955D18))(this, playerId, playerName, bIsOwner, callback);
	}
	template <typename T = void> T SetPos(Il2CppVector3 vect, bool bLeft, bool restrict, Il2CppVector3 topLeft, Il2CppVector3 topRight, Il2CppVector3 bottomLeft, Il2CppVector3 bottomRight) {
		return ((T (*)(BRMemberInfoSettingView*, Il2CppVector3, bool, bool, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x19558E0))(this, vect, bLeft, restrict, topLeft, topRight, bottomLeft, bottomRight);
	}

};

}
