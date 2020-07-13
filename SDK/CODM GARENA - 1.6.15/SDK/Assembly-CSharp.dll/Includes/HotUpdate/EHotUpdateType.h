#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HotUpdate {

class EHotUpdateType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HotUpdate", "EHotUpdateType"));
	}

	template <typename T = int32_t> static T& xLuaHotFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& xLuaInjectScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
