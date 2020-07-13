#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PlayAgainData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PlayAgainData"));
	}

	template <typename T = uint32_t> T& BusID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayersInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& PlayAgainEndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& RoomEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& RoomOwnerID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& RoomMaxNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& LastCreateRoomTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LocalPlayersInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsLocalPlayerAlreadySelect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& IsPlayAgainMatching() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanShowPlayAgainWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPlayAgainData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T IsCanShowPlayAgainWindow() {
		return ((T (*)(PlayAgainData*))(Il2CppBase() + 0x3B28C4C))(this);
	}
	template <typename T = void> T ClearPlayAgainData() {
		return ((T (*)(PlayAgainData*))(Il2CppBase() + 0x3B28D6C))(this);
	}

};

}
