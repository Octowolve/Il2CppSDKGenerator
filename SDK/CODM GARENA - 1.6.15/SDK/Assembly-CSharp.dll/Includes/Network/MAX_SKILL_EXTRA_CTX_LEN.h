#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MAXSKILLEXTRACTXLEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MAX_SKILL_EXTRA_CTX_LEN"));
	}

	template <typename T = int32_t> static T& VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
