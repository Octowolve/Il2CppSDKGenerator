#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class MatchElementTypeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "MatchElementTypeAttribute"));
	}

	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_FieldName() {
		return ((T (*)(MatchElementTypeAttribute*))(Il2CppBase() + 0x2F227D8))(this);
	}

};

}
