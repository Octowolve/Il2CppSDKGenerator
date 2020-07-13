#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class ISoundConfigItem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "ISoundConfigItem`1"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T ReadKeys(Il2CppString* strLine, int32_t iItemCount) {
		return ((T (*)(ISoundConfigItem1*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, strLine, iItemCount);
	}
	template <typename T = bool> T ReadConfigs(Il2CppString* strLine, int32_t iItemCount, Il2CppArray<uintptr_t>* strKeys, Il2CppArray<uintptr_t>* pCustomFieldInfos) {
		return ((T (*)(ISoundConfigItem1*, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, strLine, iItemCount, strKeys, pCustomFieldInfos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T RetrieveCustomizeField(Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(ISoundConfigItem1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, arrKeys);
	}
	template <typename T = uintptr_t> T get_ID() {
		return ((T (*)(ISoundConfigItem1*))(Il2CppBase() + 0x0))(this);
	}

};

}
