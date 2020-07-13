#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class CallbackFlags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "CallbackFlags"));
	}

	template <typename T = uint32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
