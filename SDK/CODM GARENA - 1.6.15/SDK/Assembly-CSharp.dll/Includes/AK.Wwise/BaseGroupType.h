#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class BaseGroupType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "BaseGroupType"));
	}

	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T GetGroupID() {
		return ((T (*)(BaseGroupType*))(Il2CppBase() + 0x4A1F788))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BaseGroupType*))(Il2CppBase() + 0x4A1F790))(this);
	}

};

}
