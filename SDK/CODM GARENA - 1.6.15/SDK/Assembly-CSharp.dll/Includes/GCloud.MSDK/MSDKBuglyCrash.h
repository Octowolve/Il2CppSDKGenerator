#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKBuglyCrash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKBuglyCrash"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x46BC5C0))(0);
	}
	template <typename T = void> static T SetAutoReportLogLevel(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46BC820))(0, level);
	}

};

}
