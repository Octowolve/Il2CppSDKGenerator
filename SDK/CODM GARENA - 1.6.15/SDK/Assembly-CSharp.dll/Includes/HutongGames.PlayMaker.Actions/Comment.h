#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Comment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Comment"));
	}

	template <typename T = Il2CppString*> T& comment() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Comment*))(Il2CppBase() + 0x4F3BDDC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Comment*))(Il2CppBase() + 0x4F3BE94))(this);
	}

};

}
