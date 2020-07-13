#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class JsonListProp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "JsonListProp"));
	}

	template <typename T = uintptr_t> T& ElementType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
