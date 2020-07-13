#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKFriendRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKFriendRet"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& friendInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_FriendInfoList() {
		return ((T (*)(MSDKFriendRet*))(Il2CppBase() + 0x46C2FEC))(this);
	}
	template <typename T = void> T set_FriendInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(MSDKFriendRet*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x46C2FF4))(this, value);
	}

};

}
