/*

import Link from 'next/link';
<Link> is used for navigational purposes.

import clsx from 'clsx';
clsx helps create conditional and general behaviour to web components.

import Image from 'next/image'
Image for image components.

import { Lusitana } from 'next/font/google';
Specific font pulls.

'use client';
Specific client behaviour, needs to be researched thoroughly.

import { unstable_noStore as noStore } from 'next/cache';
For disabling cache behaviour

import { useSearchParams, usePathname, useRouter } from 'next/navigation';
useSearchParams- Allows you to access the parameters of the current URL. 
usePathname - Lets you read the current URL's pathname. 
useRouter - Enables navigation between routes within client components programmatically.

defaultValue vs. value / Controlled vs. Uncontrolled
If you're using state to manage the value of an input, you'd use the value attribute to make it a controlled component. 
This means React would manage the input's state.
However, since you're not using state, you can use defaultValue. 
This means the native input will manage its own state. This is okay since you're saving the search query to the URL instead of state.

import { useDebouncedCallback } from 'use-debounce';
limits the rate at which a function can fire.


*/