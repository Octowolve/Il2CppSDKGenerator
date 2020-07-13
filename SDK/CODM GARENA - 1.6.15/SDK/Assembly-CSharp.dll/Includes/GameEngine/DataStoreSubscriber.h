#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DataStoreSubscriber
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DataStoreSubscriber"));
	}


	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(DataStoreSubscriber*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}

};

}
