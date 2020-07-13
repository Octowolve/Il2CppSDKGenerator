#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastTemplateStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastTemplateStruct"));
	}

	template <typename T = uint32_t> T& TemplateID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Template() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
