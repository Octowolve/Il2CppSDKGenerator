#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Live {

class LiveDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Live", "LiveDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LiveDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLiveConfRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLiveConfMessageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRedDotRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T SendLiveConfRequest() {
		return ((T (*)(LiveDataAgent*))(Il2CppBase() + 0x493F050))(this);
	}
	template <typename T = void> T OnLiveConfMessageResponse(uintptr_t msg) {
		return ((T (*)(LiveDataAgent*, uintptr_t))(Il2CppBase() + 0x493F180))(this, msg);
	}
	template <typename T = bool> T SendRedDotRequest() {
		return ((T (*)(LiveDataAgent*))(Il2CppBase() + 0x493F614))(this);
	}
	template <typename T = void> T OpenLive() {
		return ((T (*)(LiveDataAgent*))(Il2CppBase() + 0x493F768))(this);
	}

};

}
