#pragma once

static MUI_ENTRY hiINSetupInitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " सेटअप ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        0,
        20,
        "कृपया प्रतीक्षा करें, ReactOS सेटअप शुरू हो रहा है",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        21,
        "और आपके उपकरणों (devices) की खोज कर रहा है...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "कृपया प्रतीक्षा करें...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY hiINLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " सेटअप ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "भाषा चयन",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  कृपया इंस्टॉलेशन प्रक्रिया के लिए भाषा चुनें।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   फिर ENTER दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  यही भाषा सिस्टम की डिफ़ॉल्ट भाषा होगी।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = जारी रखें  F3 = बाहर निकलें",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY hiINWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " सेटअप ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "ReactOS सेटअप में आपका स्वागत है",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "सेटअप का यह भाग ReactOS ऑपरेटिंग सिस्टम को आपके कंप्यूटर पर कॉपी करता है",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "और सेटअप के दूसरे भाग के लिए तैयारी करता है।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  ReactOS इंस्टॉल या अपग्रेड करने के लिए ENTER दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  ReactOS इंस्टॉलेशन की मरम्मत के लिए R दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  लाइसेंस की नियम और शर्तें देखने के लिए L दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  इंस्टॉल किए बिना बाहर निकलने के लिए F3 दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        23,
        "ReactOS के बारे में अधिक जानकारी के लिए यहाँ जाएँ:",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        24,
        "https://reactos.org/",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = जारी रखें  R = मरम्मत  L = लाइसेंस  F3 = बाहर निकलें",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY hiINSuccessPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " सेटअप ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        10,
        6,
        "ReactOS के बुनियादी घटक सफलतापूर्वक इंस्टॉल हो गए हैं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        8,
        "ड्राइव A: से फ्लॉपी डिस्क निकालें और",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        9,
        "सभी CD-ROM को ड्राइव से निकालें।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        11,
        "कंप्यूटर को रीबूट करने के लिए ENTER दबाएं।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = कंप्यूटर रीबूट करें",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

MUI_STRING hiINStrings[] =
{
    {STRING_PLEASEWAIT,
     "   कृपया प्रतीक्षा करें..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = इंस्टॉल  C = प्राइमरी बनाएं  E = एक्सटेंडेड बनाएं  F3 = बाहर निकलें"},
    {STRING_PARTITIONSIZE,
     "नए पार्टीशन का आकार:"},
    {STRING_CONTINUE,
    "ENTER = जारी रखें"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = कंप्यूटर रीबूट करें"},
    {STRING_COPYING,
     "   कॉपी हो रहा है: %S"},
    {STRING_SETUPCOPYINGFILES,
     "सेटअप फ़ाइलें कॉपी कर रहा है..."},
    {STRING_KB, "KB"},
    {STRING_MB, "MB"},
    {STRING_GB, "GB"},
    {0, 0}
};