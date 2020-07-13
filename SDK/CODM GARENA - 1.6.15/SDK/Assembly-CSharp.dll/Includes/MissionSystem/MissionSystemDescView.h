#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionSystemDescView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionSystemDescView"));
	}

	template <typename T = uintptr_t> T& m_Title() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_DescContent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> static T& DELTA_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
