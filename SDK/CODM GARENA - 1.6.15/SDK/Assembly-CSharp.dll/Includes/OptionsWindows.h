#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsWindows
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionsWindows"));
	}

	template <typename T = uintptr_t> T& videoApi() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useHardwareDecoding() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& useUnityAudio() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& forceAudioResample() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& useTextureMips() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& hintAlphaChannel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& useLowLatency() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = Il2CppString*> T& forceAudioOutputDeviceName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& preferredFilters() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& enableAudio360() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& audio360ChannelMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(OptionsWindows*))(Il2CppBase() + 0x41211F0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModified() {
		return ((T (*)(OptionsWindows*))(Il2CppBase() + 0x41213AC))(this);
	}

};

}
