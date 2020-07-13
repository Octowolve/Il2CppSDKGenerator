#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMemberItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMemberItem"));
	}

	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelMemberName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnSeat() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteClose() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteAi() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteRoomOwner() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteNotReady() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteIsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ColorLocalPlayer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ColorNormal() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_SeatIndex() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& m_PlayerName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SpriteSelect() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_Ai() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_Close() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& m_IsSelf() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& VoiceSpeakingObj() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& VoiceSlientObj() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& vecLeft() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& vecRight() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& mUpdateVoiceTimer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSeatClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberSettingPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAC6D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAC81C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAC964))(this);
	}
	template <typename T = void> T UpdateVoiceStatus(Il2CppString* roomName) {
		return ((T (*)(BRMemberItem*, Il2CppString*))(Il2CppBase() + 0x1AACADC))(this, roomName);
	}
	template <typename T = uintptr_t> T GetSelfVoiceStatus() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AACDB4))(this);
	}
	template <typename T = void> T SetMemberInfo(int32_t index, uintptr_t info, int32_t seatIndex, uintptr_t camp, uint32_t maxPlayerCount, uint32_t maxAiPlayerCount, uint64_t roomOnwerPlayerId) {
		return ((T (*)(BRMemberItem*, int32_t, uintptr_t, int32_t, uintptr_t, uint32_t, uint32_t, uint64_t))(Il2CppBase() + 0x1AACF30))(this, index, info, seatIndex, camp, maxPlayerCount, maxAiPlayerCount, roomOnwerPlayerId);
	}
	template <typename T = void> T OnBtnSeatClick() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAD77C))(this);
	}
	template <typename T = Il2CppVector3> T GetLeftPos() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AADE9C))(this);
	}
	template <typename T = Il2CppVector3> T GetRightPos() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAE174))(this);
	}
	template <typename T = void> T GetMemberSettingPos(uintptr_t vec, uintptr_t bLeft) {
		return ((T (*)(BRMemberItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AADD20))(this, vec, bLeft);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAE44C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRMemberItem*))(Il2CppBase() + 0x1AAE454))(this);
	}

};

}
