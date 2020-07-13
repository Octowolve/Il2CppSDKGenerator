#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class HotfixRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "HotfixRecord"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& RecordIndices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
