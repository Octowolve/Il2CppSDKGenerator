#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionCategoryAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionCategoryAttribute"));
	}

	template <typename T = Il2CppString*> T& category() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(ActionCategoryAttribute*))(Il2CppBase() + 0x2EC8EB4))(this);
	}

};

}
