#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.GVoice {

class MemberRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.GVoice", "MemberRole"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Anchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Audience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
