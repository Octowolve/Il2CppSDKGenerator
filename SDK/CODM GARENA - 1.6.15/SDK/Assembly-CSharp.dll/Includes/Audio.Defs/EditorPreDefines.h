#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class EditorPreDefines
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "EditorPreDefines"));
	}

	template <typename T = Il2CppString*> static T& ActorCacheFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}