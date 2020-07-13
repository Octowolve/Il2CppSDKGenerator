#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BossSoundConfigBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BossSoundConfigBase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mBossBaseSounds() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Bank1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Bank2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Bank3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& BossDieEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPlayer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mInited() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCurPlayingIDs() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractAudioList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySoundExt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init(uintptr_t pBossPawn) {
		return ((T (*)(BossSoundConfigBase*, uintptr_t))(Il2CppBase() + 0x3615FB8))(this, pBossPawn);
	}
	template <typename T = void> T LoadBank() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x36161E4))(this);
	}
	template <typename T = void> T OnBossDie() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x3616450))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ExtractAudioList() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x3616570))(this);
	}
	template <typename T = void> T PlayOneShot(int32_t iIndex) {
		return ((T (*)(BossSoundConfigBase*, int32_t))(Il2CppBase() + 0x361669C))(this, iIndex);
	}
	template <typename T = void> T PlaySound(int32_t iIndex) {
		return ((T (*)(BossSoundConfigBase*, int32_t))(Il2CppBase() + 0x361686C))(this, iIndex);
	}
	template <typename T = void> T StopSound(int32_t iIndex) {
		return ((T (*)(BossSoundConfigBase*, int32_t))(Il2CppBase() + 0x3616A30))(this, iIndex);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x3616AD0))(this);
	}
	template <typename T = void> T UnloadBank() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x3616B74))(this);
	}
	template <typename T = void> T PlaySoundExt(int32_t iIndex) {
		return ((T (*)(BossSoundConfigBase*, int32_t))(Il2CppBase() + 0x3616DCC))(this, iIndex);
	}
	template <typename T = void> T StopAll() {
		return ((T (*)(BossSoundConfigBase*))(Il2CppBase() + 0x3616F40))(this);
	}
	template <typename T = void> T SetSwitch(Il2CppString* groupName, Il2CppString* groupValue) {
		return ((T (*)(BossSoundConfigBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x361705C))(this, groupName, groupValue);
	}

};

}
