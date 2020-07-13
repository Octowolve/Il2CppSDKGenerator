#pragma once
#include <Il2Cpp/Il2Cpp.h>

class iTweenFSMEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "iTweenFSMEvents"));
	}

	template <typename T = int32_t> static T& itweenIDCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& itweenID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& itweenFSMAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& donotfinish() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& islooping() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_iTweenOnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_iTweenOnComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T iTweenOnStart(int32_t aniTweenID) {
		return ((T (*)(iTweenFSMEvents*, int32_t))(Il2CppBase() + 0x31C94FC))(this, aniTweenID);
	}
	template <typename T = void> T iTweenOnComplete(int32_t aniTweenID) {
		return ((T (*)(iTweenFSMEvents*, int32_t))(Il2CppBase() + 0x31C9618))(this, aniTweenID);
	}

};

}
