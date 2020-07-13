#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class FieldNameAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "FieldNameAttribute"));
	}

	template <typename T = Il2CppString*> T& mStrName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FieldNameAttribute*))(Il2CppBase() + 0x44D0CCC))(this);
	}

};

}
