#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarBombConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarBombConf"));
	}

	template <typename T = int32_t> T& ExplodeConfigID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& OnFireHealthRate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& OnFireExplodeTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
