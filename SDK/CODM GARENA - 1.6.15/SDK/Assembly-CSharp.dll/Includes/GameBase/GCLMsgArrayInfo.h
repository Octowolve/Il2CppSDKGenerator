#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GCLMsgArrayInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GCLMsgArrayInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MsgArrayID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
