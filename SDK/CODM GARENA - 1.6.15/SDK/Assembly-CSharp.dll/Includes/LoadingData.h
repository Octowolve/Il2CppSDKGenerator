#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingData"));
	}

	template <typename T = bool> T& isCdn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& localPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& urlPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isPersistentSizeAdaptor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isPersistentCdn() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& persistentLocalPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& persistentUrlPath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NoviceGuideType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& noviceTipList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(LoadingData*))(Il2CppBase() + 0x4330084))(this);
	}

};

}
