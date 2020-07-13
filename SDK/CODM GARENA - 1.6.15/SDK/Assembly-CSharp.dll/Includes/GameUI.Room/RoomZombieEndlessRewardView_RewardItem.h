#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieEndlessRewardViewRewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieEndlessRewardView_RewardItem"));
	}

	template <typename T = uintptr_t> T& FrameSprite_Left() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FrameSprite_Right() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FrameSprite_Normal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ForwardBg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ForwardHl() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PassState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PassName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& WaveId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& LastWaveId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_WaveId() {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*))(Il2CppBase() + 0x213A17C))(this);
	}
	template <typename T = void> T set_WaveId(int32_t value) {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*, int32_t))(Il2CppBase() + 0x213A184))(this, value);
	}
	template <typename T = int32_t> T get_LastWaveId() {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*))(Il2CppBase() + 0x213A18C))(this);
	}
	template <typename T = void> T set_LastWaveId(int32_t value) {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*, int32_t))(Il2CppBase() + 0x213A194))(this, value);
	}
	template <typename T = void> T SetContent(int32_t itemID, Il2CppString* iconSprite, int32_t waveId, int32_t lastWaveId, int32_t index) {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*, int32_t, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x213A19C))(this, itemID, iconSprite, waveId, lastWaveId, index);
	}
	template <typename T = void> T SetState(bool bPass, bool bPassForward) {
		return ((T (*)(RoomZombieEndlessRewardViewRewardItem*, bool, bool))(Il2CppBase() + 0x213A5AC))(this, bPass, bPassForward);
	}

};

}
