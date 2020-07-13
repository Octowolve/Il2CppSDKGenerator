#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceRecordController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceRecordController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceStartPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceEndPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceCancellFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceContinueFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceCancellConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE4FB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE505C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE5168))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE53B0))(this);
	}
	template <typename T = void> T OnVoiceStartPress(uintptr_t msg) {
		return ((T (*)(VoiceRecordController*, uintptr_t))(Il2CppBase() + 0x1BE54BC))(this, msg);
	}
	template <typename T = void> T OnVoiceEndPress(uintptr_t msg) {
		return ((T (*)(VoiceRecordController*, uintptr_t))(Il2CppBase() + 0x1BE5724))(this, msg);
	}
	template <typename T = void> T OnVoiceCancellFlag(uintptr_t msg) {
		return ((T (*)(VoiceRecordController*, uintptr_t))(Il2CppBase() + 0x1BE5860))(this, msg);
	}
	template <typename T = void> T OnVoiceContinueFlag(uintptr_t msg) {
		return ((T (*)(VoiceRecordController*, uintptr_t))(Il2CppBase() + 0x1BE599C))(this, msg);
	}
	template <typename T = void> T OnVoiceCancellConfirm(uintptr_t msg) {
		return ((T (*)(VoiceRecordController*, uintptr_t))(Il2CppBase() + 0x1BE5AD8))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE5C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE5C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE5C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VoiceRecordController*))(Il2CppBase() + 0x1BE5C2C))(this);
	}

};

}
