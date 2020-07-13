#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class PufferUpdateInitType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "PufferUpdateInitType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Puffer_UpdateInitType_SeparateRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Puffer_UpdateInitType_Res4DolphinApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Puffer_UpdateInitType_Res4DolphinRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
