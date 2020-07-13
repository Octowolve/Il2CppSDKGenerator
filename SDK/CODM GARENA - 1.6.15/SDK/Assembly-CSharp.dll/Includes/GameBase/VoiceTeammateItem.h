#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceTeammateItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceTeammateItem"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OffObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& VoiceObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ForbidBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CurSelectMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& mPlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& CacheSeatIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mIsRobot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mRobotForbiden() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForbidBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_CachePlayerId() {
		return ((T (*)(VoiceTeammateItem*))(Il2CppBase() + 0x1BE64EC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VoiceTeammateItem*))(Il2CppBase() + 0x1BE64F4))(this);
	}
	template <typename T = void> T OnForbidBtnClick(uintptr_t obj) {
		return ((T (*)(VoiceTeammateItem*, uintptr_t))(Il2CppBase() + 0x1BE6654))(this, obj);
	}
	template <typename T = void> T Init(uintptr_t info) {
		return ((T (*)(VoiceTeammateItem*, uintptr_t))(Il2CppBase() + 0x1BE7078))(this, info);
	}
	template <typename T = Il2CppString*> static T GetShowRoomName(uintptr_t channelMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BE6C8C))(0, channelMode);
	}
	template <typename T = void> T UpdateVoiceStatus(Il2CppString* roomName) {
		return ((T (*)(VoiceTeammateItem*, Il2CppString*))(Il2CppBase() + 0x1BE6E60))(this, roomName);
	}
	template <typename T = void> T ClearVoiceStatus() {
		return ((T (*)(VoiceTeammateItem*))(Il2CppBase() + 0x1BE7238))(this);
	}
	template <typename T = void> T SetVoiceStatus(uintptr_t state) {
		return ((T (*)(VoiceTeammateItem*, uintptr_t))(Il2CppBase() + 0x1BE6B1C))(this, state);
	}

};

}
