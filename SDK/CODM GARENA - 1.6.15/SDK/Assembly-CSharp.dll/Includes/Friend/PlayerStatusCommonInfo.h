#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class PlayerStatusCommonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "PlayerStatusCommonInfo"));
	}

	template <typename T = Il2CppString*> static T& GRAY_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ORANGE_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WHITE_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RED_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GREEN_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePlayerServerStateToClientState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStateInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStateShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStateColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStateText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerStatePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_ColorOffLine() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C06CC))(0);
	}
	template <typename T = uintptr_t> static T get_ColorOnLine() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0790))(0);
	}
	template <typename T = uintptr_t> static T get_ColorInGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0854))(0);
	}
	template <typename T = uintptr_t> static T get_ColorInReady() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0918))(0);
	}
	template <typename T = uintptr_t> static T get_ColorInGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C09DC))(0);
	}
	template <typename T = uintptr_t> static T get_ColorInObserve() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0AA0))(0);
	}
	template <typename T = Il2CppString*> static T get_OffLineText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0B64))(0);
	}
	template <typename T = Il2CppString*> static T get_OnLineText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0BE8))(0);
	}
	template <typename T = Il2CppString*> static T get_InGroupText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0C6C))(0);
	}
	template <typename T = Il2CppString*> static T get_InReadyText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0CF0))(0);
	}
	template <typename T = Il2CppString*> static T get_InGameText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0D74))(0);
	}
	template <typename T = Il2CppString*> static T get_SpvpMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0DF8))(0);
	}
	template <typename T = Il2CppString*> static T get_SpvpRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0E7C))(0);
	}
	template <typename T = Il2CppString*> static T get_BrMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0F00))(0);
	}
	template <typename T = Il2CppString*> static T get_BrRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0F84))(0);
	}
	template <typename T = Il2CppString*> static T get_BrRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C1008))(0);
	}
	template <typename T = Il2CppString*> static T get_SpvpRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C108C))(0);
	}
	template <typename T = Il2CppString*> static T get_InObserveText() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C1110))(0);
	}
	template <typename T = uintptr_t> static T ChangePlayerServerStateToClientState(int32_t steteEnum) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x32C1194))(0, steteEnum);
	}
	template <typename T = uintptr_t> static T GetPlayerState(int32_t stateEnum, uint64_t playerID, uintptr_t RoomDS) {
		return ((T (*)(void *, int32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x32C1268))(0, stateEnum, playerID, RoomDS);
	}
	template <typename T = uintptr_t> static T GetPlayerStateInvitation(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C13D0))(0, state);
	}
	template <typename T = uintptr_t> static T GetPlayerStateShow(int32_t stateEnum, uint64_t playerID, uintptr_t RoomDS) {
		return ((T (*)(void *, int32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x32C149C))(0, stateEnum, playerID, RoomDS);
	}
	template <typename T = uintptr_t> static T GetPlayerStateColor(uintptr_t stateShow) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C15A4))(0, stateShow);
	}
	template <typename T = Il2CppString*> static T GetPlayerStateText(uintptr_t stateShow) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C171C))(0, stateShow);
	}
	template <typename T = Il2CppString*> static T GetPlayerStateSprite(uintptr_t stateShow) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C18E4))(0, stateShow);
	}
	template <typename T = int32_t> static T GetPlayerStatePriority(int32_t stateEnum, uint64_t playerID, uintptr_t RoomDS) {
		return ((T (*)(void *, int32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x32C1A2C))(0, stateEnum, playerID, RoomDS);
	}

};

}
