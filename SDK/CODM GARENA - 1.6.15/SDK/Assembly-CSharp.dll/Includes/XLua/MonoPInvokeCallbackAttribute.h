#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class MonoPInvokeCallbackAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "MonoPInvokeCallbackAttribute"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
