#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Live {

class LiveDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Live", "LiveDataStore"));
	}

	template <typename T = Il2CppString*> T& partition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& sServiceType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& actid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& lang() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& country() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& config() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& curData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& lastClickTimeStamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& CDTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& freshTimer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRefreshDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenLiveEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRequestParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItopParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RefreshConfig(Il2CppList<uintptr_t>* data, uint32_t streamTimestamp) {
		return ((T (*)(LiveDataStore*, Il2CppList<uintptr_t>*, uint32_t))(Il2CppBase() + 0x493F3C8))(this, data, streamTimestamp);
	}
	template <typename T = void> T NotifyRefreshDisplay() {
		return ((T (*)(LiveDataStore*))(Il2CppBase() + 0x49403B0))(this);
	}
	template <typename T = bool> T IsOpenLiveEntrance() {
		return ((T (*)(LiveDataStore*))(Il2CppBase() + 0x4940494))(this);
	}
	template <typename T = bool> T HadClick(uintptr_t data) {
		return ((T (*)(LiveDataStore*, uintptr_t))(Il2CppBase() + 0x49402DC))(this, data);
	}
	template <typename T = bool> T HasReddot() {
		return ((T (*)(LiveDataStore*))(Il2CppBase() + 0x49406C8))(this);
	}
	template <typename T = uintptr_t> T GetCurrentData() {
		return ((T (*)(LiveDataStore*))(Il2CppBase() + 0x493F960))(this);
	}
	template <typename T = Il2CppString*> T GetRequestParam(uintptr_t data) {
		return ((T (*)(LiveDataStore*, uintptr_t))(Il2CppBase() + 0x493FA00))(this, data);
	}
	template <typename T = Il2CppString*> T GetChannelToken(Il2CppString* channelinfo) {
		return ((T (*)(LiveDataStore*, Il2CppString*))(Il2CppBase() + 0x494096C))(this, channelinfo);
	}
	template <typename T = Il2CppString*> T GetItopParam(Il2CppString* url) {
		return ((T (*)(LiveDataStore*, Il2CppString*))(Il2CppBase() + 0x49407A8))(this, url);
	}
	template <typename T = Il2CppString*> T GetLanguage() {
		return ((T (*)(LiveDataStore*))(Il2CppBase() + 0x4940AD4))(this);
	}

};

}
