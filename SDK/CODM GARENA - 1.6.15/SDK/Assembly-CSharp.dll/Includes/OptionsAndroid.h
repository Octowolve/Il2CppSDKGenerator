#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionsAndroid"));
	}

	template <typename T = uintptr_t> T& videoApi() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useFastOesPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& showPosterFrame() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& enableAudio360() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& audio360ChannelMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& preferSoftwareDecoder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& httpHeaderJson() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& fileOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(OptionsAndroid*))(Il2CppBase() + 0x41207FC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModified() {
		return ((T (*)(OptionsAndroid*))(Il2CppBase() + 0x41209FC))(this);
	}

};

}
