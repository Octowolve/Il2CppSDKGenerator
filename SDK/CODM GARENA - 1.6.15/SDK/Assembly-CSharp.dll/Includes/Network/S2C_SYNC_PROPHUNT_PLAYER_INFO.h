#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCPROPHUNTPLAYERINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_PROPHUNT_PLAYER_INFO"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& BaitNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& ChangeItemNum() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = unsigned char> T& BetNum() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = unsigned char> T& FlashNum() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uint16_t> T& WinBetScore() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& LockStat() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCPROPHUNTPLAYERINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E93AF4))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E93CC0))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCPROPHUNTPLAYERINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E93D70))(this, P0, P1);
	}

};

}
