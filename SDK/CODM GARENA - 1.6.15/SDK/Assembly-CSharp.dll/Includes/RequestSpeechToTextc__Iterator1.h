#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestSpeechToTextcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RequestSpeechToText>c__Iterator1"));
	}

	template <typename T = Il2CppString*> T& voiceFileId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& result__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(RequestSpeechToTextcIterator1*))(Il2CppBase() + 0x24F9D7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RequestSpeechToTextcIterator1*))(Il2CppBase() + 0x24F9EBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RequestSpeechToTextcIterator1*))(Il2CppBase() + 0x24F9EC4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RequestSpeechToTextcIterator1*))(Il2CppBase() + 0x24F9ECC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RequestSpeechToTextcIterator1*))(Il2CppBase() + 0x24F9EE0))(this);
	}

};

}
